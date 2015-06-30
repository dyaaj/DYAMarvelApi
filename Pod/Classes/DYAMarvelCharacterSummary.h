//
//  DYAMarvelCharacterSummary.h
//  Pods
//
//  Created by David Yang on 30/06/2015.
//
//

#import "DYAMarvelModel.h"

@protocol DYAMarvelCharacterSummary
@end

@interface DYAMarvelCharacterSummary : DYAMarvelModel

@property (strong, nonatomic) NSString *resourceURI;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *role;

@end
