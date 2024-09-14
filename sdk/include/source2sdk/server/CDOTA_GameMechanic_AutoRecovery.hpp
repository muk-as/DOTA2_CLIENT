#pragma once
#include "source2sdk/server/CServerOnlyEntity.hpp"
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
    // Size: 0x510
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_GameMechanic_AutoRecovery : public server::CServerOnlyEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4b8[0x10]; // 0x4b8
        float m_flRecoveryDelay; // 0x4c8        
        float m_flHealthRegenPerSecond; // 0x4cc        
        float m_flManaRegenPerSecond; // 0x4d0        
        float m_flTickInterval; // 0x4d4        
        [[maybe_unused]] std::uint8_t pad_0x4d8[0x38];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_GameMechanic_AutoRecovery because it is not a standard-layout class
    static_assert(sizeof(CDOTA_GameMechanic_AutoRecovery) == 0x510);
};
