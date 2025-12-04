#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ELanguage.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CComicBook
        {
        public:
            // metadata: MPropertyDescription "ID of the comic book.  Must be unique.  Changing will disrupt graphs."
            std::int32_t m_nId; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Name of the comic book.  Must be unique.  Changing will disrupt graphs."
            CUtlString m_Name; // 0x_            
            // metadata: MPropertyDescription "User facing name or localization token to the user facing name."
            CUtlString m_strNameToken; // 0x_            
            // metadata: MPropertyDescription "Cover image to use. Likely starts with file://{images}/comics/..."
            CPanoramaImageName m_CoverImage; // 0x_            
            // metadata: MPropertyDescription "Number Of Images"
            std::int32_t m_nNumberOfImages; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "URL for images.  Supports %CDN% and %LANGUAGE% variables to be replaced at runtime."
            CUtlString m_URLForImages; // 0x_            
            // metadata: MPropertyDescription "Num digits in filename.  Will be zero padded (i.e. 001, 002, 003, etc)"
            std::int32_t m_nNumDigitsInFilename; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Image file extension."
            CUtlString m_ImageFileExtension; // 0x_            
            // metadata: MPropertyDescription "Allowed languages for this comic book.  Anything not specified here will default to English."
            // m_AllowedLanguages has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ELanguage> m_AllowedLanguages;
            char m_AllowedLanguages[0x_]; // 0x_            
            // metadata: MPropertyDescription "Language mapping for overrides. This is used when we don't have content like tchinese but have schinese and want to map one to the other."
            // m_LanguageOverrideMap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::ELanguage,source2sdk::client::ELanguage> m_LanguageOverrideMap;
            char m_LanguageOverrideMap[0x_]; // 0x_            
            // metadata: MPropertyDescription "Indices of pages that are new pages to the user.  Useful if you have a series of images which are full screen but reveal new cells. If not specified, each page is a start page. Try setting the comic_viewer_popup_show_internal_page convar to help set this up."
            // m_StartPages has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_StartPages;
            char m_StartPages[0x_]; // 0x_            
            // metadata: MPropertyDescription "Cache version to use. Increment this number if the files on the CDN have changed but the URL has not."
            std::int32_t m_nCacheBustingVersion; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CComicBook, m_nId) == 0x_);
        static_assert(offsetof(source2sdk::client::CComicBook, m_Name) == 0x_);
        static_assert(offsetof(source2sdk::client::CComicBook, m_strNameToken) == 0x_);
        static_assert(offsetof(source2sdk::client::CComicBook, m_CoverImage) == 0x_);
        static_assert(offsetof(source2sdk::client::CComicBook, m_nNumberOfImages) == 0x_);
        static_assert(offsetof(source2sdk::client::CComicBook, m_URLForImages) == 0x_);
        static_assert(offsetof(source2sdk::client::CComicBook, m_nNumDigitsInFilename) == 0x_);
        static_assert(offsetof(source2sdk::client::CComicBook, m_ImageFileExtension) == 0x_);
        static_assert(offsetof(source2sdk::client::CComicBook, m_AllowedLanguages) == 0x_);
        static_assert(offsetof(source2sdk::client::CComicBook, m_LanguageOverrideMap) == 0x_);
        static_assert(offsetof(source2sdk::client::CComicBook, m_StartPages) == 0x_);
        static_assert(offsetof(source2sdk::client::CComicBook, m_nCacheBustingVersion) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CComicBook) == 0x_);
    };
};
