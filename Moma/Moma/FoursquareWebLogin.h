//
//  ElanceWebLogin.h
//  elance
//
//  Created by Constantine Fry on 12/20/10.
//  Copyright 2010 Home. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FoursquareWebLogin;

@protocol CNFoursquareLoginDelegate
-(void)setCode:(NSString*)code;
@end

@interface FoursquareWebLogin : UIViewController<UIWebViewDelegate> {
	NSString *_url;
	UIWebView *webView;
}

@property (weak, nonatomic) id <CNFoursquareLoginDelegate> delegate;

- (id) initWithUrl:(NSString*)url;
@end
