//
//	CGPDFDocument.h
//	Reader
//
//	Created by Julius Oklamcak on 2010-09-01.
//	Copyright © 2010-2011 Julius Oklamcak. All rights reserved.
//
//	This work is being made available under a Creative Commons Attribution license:
//		«http://creativecommons.org/licenses/by/3.0/»
//	You are free to use this work and any derivatives of this work in personal and/or
//	commercial products and projects as long as the above copyright is maintained and
//	the original author is attributed.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

//
//	Custom CGPDFDocument[...] functions
//

CGPDFDocumentRef CGPDFDocumentCreateX(CFURLRef theURL, NSString *password);

CGSize CGPDFDocumentPageSize(CFURLRef theURL, NSString *password, NSInteger page);

BOOL CGPDFDocumentNeedsPassword(CFURLRef theURL, NSString *password);
