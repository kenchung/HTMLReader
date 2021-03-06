//  HTMLDocumentType.h
//
//  Public domain. https://github.com/nolanw/HTMLReader

#import "HTMLNode.h"

/**
    An HTMLDocumentType represents an archaic description of the standards an HTML document is meant to adhere to.
 
    The only valid document type is `<!DOCTYPE html>`.
 
    For more information, see http://www.whatwg.org/specs/web-apps/current-work/multipage/syntax.html#the-doctype
 */
@interface HTMLDocumentType : HTMLNode

/**
    Given:   <!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
                      |____|       |_________________________| |_____________________________________|
    We have:           name             publicIdentifier                  systemIdentifier
 */
- (instancetype)initWithName:(NSString *)name publicIdentifier:(NSString *)publicIdentifier systemIdentifier:(NSString *)systemIdentifier NS_DESIGNATED_INITIALIZER;

/// That first part of the DOCTYPE.
@property (readonly, copy, nonatomic) NSString *name;

/// That second part of the DOCTYPE.
@property (readonly, copy, nonatomic) NSString *publicIdentifier;

/// That third part of the DOCTYPE.
@property (readonly, copy, nonatomic) NSString *systemIdentifier;

@end
