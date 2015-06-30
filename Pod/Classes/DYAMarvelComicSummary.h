//
//  DYAMarvelComicSummary.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import "DYAMarvelModel.h"

@protocol DYAMarvelComicSummary
@end

@interface DYAMarvelComicSummary : DYAMarvelModel

@property (strong, nonatomic) NSString *resourceURI;
@property (strong, nonatomic) NSString *name;

@end
