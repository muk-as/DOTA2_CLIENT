#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifer_Item_TurtleShell_Shell : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t damage_reduction; // 0x1878            
            Vector m_vecPosition; // 0x187c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifer_Item_TurtleShell_Shell because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifer_Item_TurtleShell_Shell) == 0x1890);
    };
};
