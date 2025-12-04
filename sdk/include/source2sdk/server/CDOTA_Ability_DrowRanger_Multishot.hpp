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
        class CDOTA_Ability_DrowRanger_Multishot : public source2sdk::server::CDOTABaseAbility
        {
        public:
            Vector m_vStartPos; // 0x_            
            std::int32_t m_iArrowProjectile; // 0x_            
            std::int32_t m_nFXIndex; // 0x_            
            float arrow_speed; // 0x_            
            std::int32_t arrow_spread; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vHitTargets0 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitTargets0;
            char m_vHitTargets0[0x_]; // 0x_            
            // m_vHitTargets1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitTargets1;
            char m_vHitTargets1[0x_]; // 0x_            
            // m_vHitTargets2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitTargets2;
            char m_vHitTargets2[0x_]; // 0x_            
            // m_vHitTargets3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitTargets3;
            char m_vHitTargets3[0x_]; // 0x_            
            // m_vHitTargets4 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitTargets4;
            char m_vHitTargets4[0x_]; // 0x_            
            // m_vHitTargets5 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitTargets5;
            char m_vHitTargets5[0x_]; // 0x_            
            // m_vHitTargets6 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitTargets6;
            char m_vHitTargets6[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_DrowRanger_Multishot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_DrowRanger_Multishot) == 0x_);
    };
};
