#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOTA_LANE.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
#include "source2sdk/server/CDOTA_CreepKillInfo.hpp"

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
        // Size: 0x1890
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "float m_flAim"
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Creep : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            source2sdk::server::CDOTA_CreepKillInfo m_KillInfo; // 0x1860            
            source2sdk::client::DOTA_LANE m_Lane; // 0x1880            
            bool m_bPushback; // 0x1884            
            uint8_t _pad1885[0x3]; // 0x1885
            // metadata: MNetworkEnable
            float m_flAim; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Creep because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Creep) == 0x1890);
    };
};
