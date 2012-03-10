//
//  ViewController.h
//  HttpRequestTest2
//
//  Created by Johnny on 12/3/9.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ASIHTTPRequest.h"

@interface ViewController : UIViewController




- (IBAction)grabURLInBackground:(id)sender;

- (void)requestFinished:(ASIHTTPRequest *)request;

- (void)requestFailed:(ASIHTTPRequest *)request;
- (IBAction)request_btn_onclick:(id)sender;
@property (retain, nonatomic) IBOutlet UILabel *response_label;

@end
