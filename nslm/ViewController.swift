//
//  ViewController.swift
//  nslm
//
//  Created by chengyoujie on 2020/2/10.
//  Copyright © 2020 chengyoujie. All rights reserved.
//

import UIKit
import WebKit

class ViewController: UIViewController {
    
    var webView = WKWebView()
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
        
        
        self.progressView.frame = CGRect(x: 0, y:64, width: view.frame.size.width, height: 2)
        self.progressView.isHidden = false
        UIView.animate(withDuration: 1.0) {
            self.progressView.progress = 0
        }
    }
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        let url = "https://www.baidu.com"
        webView = WKWebView(frame: CGRect(x:0,y:0, width:UIScreen.main.bounds.size.width,height:UIScreen.main.bounds.size.height) )
        view.addSubview(webView)
        webView.navigationDelegate = self
        let mapwayURL = URL(string: url)!
        let mapwayRequest = URLRequest(url:mapwayURL)
        webView.load(mapwayRequest)
        
    }
    //progress
    lazy var progressView:UIProgressView = {
        let progress = UIProgressView()
        progress.progressTintColor = UIColor.orange
        progress.trackTintColor = .clear
        return progress
    }()
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    
}

extension ViewController:WKNavigationDelegate{
    func webView(_ webView: WKWebView, didStartProvisionalNavigation navigation: WKNavigation!) {
        self.navigationItem.title = "Loading ..."
        UIView.animate(withDuration: 0.5) {
            self.progressView.progress = Float(self.webView.estimatedProgress)
        }
        
    }
    
    func webView(_ webView: WKWebView, didCommit navigation: WKNavigation!) {
        
    }
    
    func webView(_ webView: WKWebView, didFinish navigation: WKNavigation!) {
        self.navigationItem.title = self.webView.title
        UIView.animate(withDuration: 0.5) {
            self.progressView.progress = 1.0
            self.progressView.isHidden = true
        }
    }
    
    func webView(_ webView: WKWebView, didFail navigation: WKNavigation!, withError error: Error) {
        UIView.animate(withDuration: 0.5) {
            self.progressView.progress = 0
            self.progressView.isHidden = true
        }
        let alertView = UIAlertController.init(title: "Alert", message: "load error", preferredStyle: .alert)
        let okAction = UIAlertAction.init(title: "ok", style: .default) {
            okAction in _=self.navigationController?.popViewController(animated: true)
        }
        alertView.addAction(okAction)
        self.present(alertView, animated: true, completion: nil)
    }
}


