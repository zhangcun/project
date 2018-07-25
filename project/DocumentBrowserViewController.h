//
//  DocumentBrowserViewController.h
//  project
//
//  Created by Jerome on 2018/7/25.
//  Copyright © 2018年 Jerome. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DocumentBrowserViewController : UIDocumentBrowserViewController

- (void)presentDocumentAtURL:(NSURL *)documentURL;

@end
