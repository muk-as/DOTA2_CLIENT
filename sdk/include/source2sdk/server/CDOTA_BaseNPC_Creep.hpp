#pragma once
#include "source2sdk/client/DOTA_LANE.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
#include "source2sdk/server/CDOTA_CreepKillInfo.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1898
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "float m_flAim"
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Creep : public server::CDOTA_BaseNPC_Additive
    {
    public:
        server::CDOTA_CreepKillInfo m_KillInfo; // 0x1868        
        client::DOTA_LANE m_Lane; // 0x1888        
        bool m_bPushback; // 0x188c        
        [[maybe_unused]] std::uint8_t pad_0x188d[0x3]; // 0x188d
        // metadata: MNetworkEnable
        float m_flAim; // 0x1890        
        [[maybe_unused]] std::uint8_t pad_0x1894[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_Creep because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_Creep) == 0x1898);
};
