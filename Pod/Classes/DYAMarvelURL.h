//
//  DYAMarvelURL.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import "DYAMarvelModel.h"

@protocol DYAMarvelURL
@end

@interface DYAMarvelURL : DYAMarvelModel

@property (strong, nonatomic) NSString *type;
@property (strong, nonatomic) NSString *url;

@end
