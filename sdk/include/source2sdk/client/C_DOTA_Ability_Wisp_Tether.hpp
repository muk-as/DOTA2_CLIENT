#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
    #pragma pack(push, 1)
    class C_DOTA_Ability_Wisp_Tether : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x600        
        Vector m_vProjectileLocation; // 0x604        
        bool m_bProjectileActive; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x611[0x3]; // 0x611
        int32_t latch_distance; // 0x614        
        int32_t m_iProjectileIndex; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x61c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Wisp_Tether because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Wisp_Tether) == 0x620);
};
