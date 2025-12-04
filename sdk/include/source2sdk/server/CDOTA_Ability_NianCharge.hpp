#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_NianCharge : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            bool m_bChargeFinished; // 0x_            
            bool m_bPlayedChargeAnimation; // 0x_            
            bool m_bPinning; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flPinStartTime; // 0x_            
            Vector m_vProjectileLocation; // 0x_            
            Vector m_vTargetLocation; // 0x_            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hTrackingProjectileHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTrackingProjectileHits;
            char m_hTrackingProjectileHits[0x_]; // 0x_            
            // m_hTrackingProjectileTrees has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_Tree*> m_hTrackingProjectileTrees;
            char m_hTrackingProjectileTrees[0x_]; // 0x_            
            std::int32_t nFXIndex; // 0x_            
            std::int32_t m_iCurProjectileIndex; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_NianCharge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_NianCharge) == 0x_);
    };
};
