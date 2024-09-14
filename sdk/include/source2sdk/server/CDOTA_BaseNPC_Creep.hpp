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
    // Size: 0x1840
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flAim"
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Creep : public server::CDOTA_BaseNPC_Additive
    {
    public:
        server::CDOTA_CreepKillInfo m_KillInfo; // 0x1810        
        client::DOTA_LANE m_Lane; // 0x1830        
        bool m_bPushback; // 0x1834        
        [[maybe_unused]] std::uint8_t pad_0x1835[0x3]; // 0x1835
        // metadata: MNetworkEnable
        float m_flAim; // 0x1838        
        [[maybe_unused]] std::uint8_t pad_0x183c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_Creep because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_Creep) == 0x1840);
};
