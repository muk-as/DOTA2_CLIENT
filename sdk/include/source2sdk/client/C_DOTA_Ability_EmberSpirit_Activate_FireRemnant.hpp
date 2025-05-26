#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_EmberSpirit_Activate_FireRemnant : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_nProjectileID; // 0x680            
            Vector m_vStartLocation; // 0x684            
            Vector m_vProjectileLocation; // 0x690            
            QAngle m_ProjectileAngles; // 0x69c            
            // m_hRemnantToKill has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRemnantToKill;
            char m_hRemnantToKill[0x4]; // 0x6a8            
            bool m_bProjectileStarted; // 0x6ac            
            uint8_t _pad06ad[0x3]; // 0x6ad
            // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> hAlreadyHitList;
            char hAlreadyHitList[0x18]; // 0x6b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_EmberSpirit_Activate_FireRemnant because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_EmberSpirit_Activate_FireRemnant) == 0x6c8);
    };
};
