#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTABaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5a8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle< CDOTABaseAbility> m_hSourceAbility"
    #pragma pack(push, 1)
    class CDOTA_Ability_Disruptor_KineticField : public server::CDOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // m_hSourceAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTABaseAbility> m_hSourceAbility;
        char m_hSourceAbility[0x4]; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5a4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Disruptor_KineticField because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Disruptor_KineticField) == 0x5a8);
};
