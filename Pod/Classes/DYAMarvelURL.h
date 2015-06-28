//
//  DYAMarvelURL.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import <JSONModel/JSONModel.h>

@protocol DYAMarvelURL
@end

@interface DYAMarvelURL : JSONModel

@property (strong, nonatomic) NSString *type;
@property (strong, nonatomic) NSString *url;

@end
