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
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Lion_Impale : public client::C_DOTABaseAbility
    {
    public:
        float width; // 0x5d8        
        float duration; // 0x5dc        
        int32_t speed; // 0x5e0        
        float length_buffer; // 0x5e4        
        float range; // 0x5e8        
        int32_t m_iDefaultCastRange; // 0x5ec        
        int32_t pierces_immunity; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f4[0x4]; // 0x5f4
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x5f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Lion_Impale because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Lion_Impale) == 0x610);
};
