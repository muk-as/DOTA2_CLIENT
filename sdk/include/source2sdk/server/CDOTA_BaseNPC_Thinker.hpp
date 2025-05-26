#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC.hpp"

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
        class CDOTA_BaseNPC_Thinker : public source2sdk::server::CDOTA_BaseNPC
        {
        public:
            bool m_bSendToAllPlayers; // 0x1898            
            bool m_bSendToClients; // 0x1899            
            uint8_t _pad189a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Thinker) == 0x18a0);
    };
};
