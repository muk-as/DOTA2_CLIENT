#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CMarkupVolume.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7e8
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        #pragma pack(push, 1)
        class CMarkupVolumeTagged : public source2sdk::server::CMarkupVolume
        {
        public:
            // m_GroupNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_GroupNames;
            char m_GroupNames[0x18]; // 0x7b0            
            // m_Tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_Tags;
            char m_Tags[0x18]; // 0x7c8            
            bool m_bIsGroup; // 0x7e0            
            bool m_bGroupByPrefab; // 0x7e1            
            bool m_bGroupByVolume; // 0x7e2            
            bool m_bGroupOtherGroups; // 0x7e3            
            bool m_bIsInGroup; // 0x7e4            
            uint8_t _pad07e5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMarkupVolumeTagged because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMarkupVolumeTagged) == 0x7e8);
    };
};
