#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"

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
        // Size: 0x18a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_PhantomAssassin_Gravestone : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            source2sdk::client::PlayerID_t m_nVictimPlayerID; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_PhantomAssassin_Gravestone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_PhantomAssassin_Gravestone) == 0x18a0);
    };
};
