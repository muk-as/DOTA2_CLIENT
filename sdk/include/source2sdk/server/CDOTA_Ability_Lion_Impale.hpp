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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Lion_Impale : public server::CDOTABaseAbility
    {
    public:
        float width; // 0x5a0        
        float duration; // 0x5a4        
        int32_t speed; // 0x5a8        
        float length_buffer; // 0x5ac        
        float range; // 0x5b0        
        int32_t m_iDefaultCastRange; // 0x5b4        
        int32_t pierces_immunity; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5bc[0x4]; // 0x5bc
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x5c0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Lion_Impale because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Lion_Impale) == 0x5d8);
};
