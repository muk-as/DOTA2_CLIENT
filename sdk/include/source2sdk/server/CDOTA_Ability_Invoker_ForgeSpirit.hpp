#pragma once
#include "source2sdk/server/CDOTA_Ability_Invoker_InvokedBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5c0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Invoker_ForgeSpirit : public server::CDOTA_Ability_Invoker_InvokedBase
    {
    public:
        // m_Spirits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_Spirits[3];
        char m_Spirits[0xc]; // 0x5b0        
        [[maybe_unused]] std::uint8_t pad_0x5bc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Invoker_ForgeSpirit because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Invoker_ForgeSpirit) == 0x5c0);
};
