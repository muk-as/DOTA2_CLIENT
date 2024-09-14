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
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Invoker_DeafeningBlast : public server::CDOTA_Ability_Invoker_InvokedBase
    {
    public:
        float end_vision_duration; // 0x5b0        
        float damage; // 0x5b4        
        float knockback_duration; // 0x5b8        
        float disarm_duration; // 0x5bc        
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x5c0        
        bool m_bGrantedGem; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5d9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Invoker_DeafeningBlast because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Invoker_DeafeningBlast) == 0x5e0);
};
