#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/PlayerID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nEpitaph; // 0x1878            
            source2sdk::client::PlayerID_t m_nVictimPlayerID; // 0x187c            
            std::int32_t m_nVictimHeroID; // 0x1880            
            std::int32_t m_nCritDmg; // 0x1884            
            std::int32_t m_nContractComplete; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker) == 0x1890);
    };
};
