//
//  DYAMarvelCharacter.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import "DYAMarvelModel.h"

#import "DYAMarvelURL.h"
#import "DYAMarvelImage.h"
#import "DYAMarvelComicList.h"
#import "DYAMarvelStoryList.h"
#import "DYAMarvelSeriesList.h"
#import "DYAMarvelEventList.h"

@protocol DYAMarvelCharacter
@end

@interface DYAMarvelCharacter : DYAMarvelModel

@property (assign, nonatomic) NSInteger identifier;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *shortDescription;
@property (strong, nonatomic) NSDate *modified;
@property (strong, nonatomic) NSString *resourceURI;
@property (strong, nonatomic) NSArray<DYAMarvelURL> *urls;
@property (strong, nonatomic) DYAMarvelImage *thumbnail;
@property (strong, nonatomic) DYAMarvelComicList *comics;
@property (strong, nonatomic) DYAMarvelStoryList *stories;
@property (strong, nonatomic) DYAMarvelEventList *events;
@property (strong, nonatomic) DYAMarvelSeriesList *series;

@end
