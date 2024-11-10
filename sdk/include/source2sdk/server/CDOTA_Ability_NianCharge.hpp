#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CDOTA_Tree;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x638
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_NianCharge : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5c8[0x10]; // 0x5c8
        bool m_bChargeFinished; // 0x5d8        
        bool m_bPlayedChargeAnimation; // 0x5d9        
        bool m_bPinning; // 0x5da        
        [[maybe_unused]] std::uint8_t pad_0x5db[0x1]; // 0x5db
        entity2::GameTime_t m_flPinStartTime; // 0x5dc        
        Vector m_vProjectileLocation; // 0x5e0        
        Vector m_vTargetLocation; // 0x5ec        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5fc[0x4]; // 0x5fc
        // m_hTrackingProjectileHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hTrackingProjectileHits;
        char m_hTrackingProjectileHits[0x18]; // 0x600        
        // m_hTrackingProjectileTrees has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CDOTA_Tree*> m_hTrackingProjectileTrees;
        char m_hTrackingProjectileTrees[0x18]; // 0x618        
        int32_t nFXIndex; // 0x630        
        int32_t m_iCurProjectileIndex; // 0x634        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_NianCharge because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_NianCharge) == 0x638);
};
