#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_Tree;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x638
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_SpiritBreaker_ChargeOfDarkness : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05c0[0x10]; // 0x5c0
            bool m_bFinished; // 0x5d0            
            bool m_bInterrupted; // 0x5d1            
            bool m_bPlayedChargeAnimation; // 0x5d2            
            uint8_t _pad05d3[0x1]; // 0x5d3
            Vector m_vProjectileLocation; // 0x5d4            
            Vector m_vTargetLocation; // 0x5e0            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x5ec            
            // m_hTrackingProjectileHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTrackingProjectileHits;
            char m_hTrackingProjectileHits[0x18]; // 0x5f0            
            // m_hTrackingProjectileTrees has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_Tree*> m_hTrackingProjectileTrees;
            char m_hTrackingProjectileTrees[0x18]; // 0x608            
            std::int32_t nFXIndex; // 0x620            
            std::int32_t m_iCurProjectileIndex; // 0x624            
            Vector m_vChargeStartPos; // 0x628            
            uint8_t _pad0634[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_SpiritBreaker_ChargeOfDarkness because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_SpiritBreaker_ChargeOfDarkness) == 0x638);
    };
};
