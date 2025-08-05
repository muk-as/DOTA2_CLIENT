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
        // Size: 0x858
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CMarkupVolumeWithRef : public source2sdk::server::CMarkupVolumeTagged
        {
        public:
            uint8_t _pad0830[0x8]; // 0x830
            bool m_bUseRef; // 0x838            
            uint8_t _pad0839[0x3]; // 0x839
            Vector m_vRefPosEntitySpace; // 0x83c            
            Vector m_vRefPosWorldSpace; // 0x848            
            float m_flRefDot; // 0x854            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMarkupVolumeWithRef because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMarkupVolumeWithRef) == 0x858);
    };
};
