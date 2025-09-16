#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/client/PlayerID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1ae8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_PhantomAssassin_Gravestone : public source2sdk::client::C_DOTA_BaseNPC_Additive
        {
        public:
            source2sdk::client::PlayerID_t m_nVictimPlayerID; // 0x1a40            
            uint8_t _pad1a44[0xa4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_PhantomAssassin_Gravestone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_PhantomAssassin_Gravestone) == 0x1ae8);
    };
};
