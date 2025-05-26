#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CMarkupVolumeTagged.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x830
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CMarkupVolumeWithRef : public source2sdk::server::CMarkupVolumeTagged
        {
        public:
            uint8_t _pad0808[0x8]; // 0x808
            bool m_bUseRef; // 0x810            
            uint8_t _pad0811[0x3]; // 0x811
            Vector m_vRefPosEntitySpace; // 0x814            
            Vector m_vRefPosWorldSpace; // 0x820            
            float m_flRefDot; // 0x82c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMarkupVolumeWithRef because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMarkupVolumeWithRef) == 0x830);
    };
};
