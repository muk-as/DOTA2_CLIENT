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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_EmberSpirit_Activate_FireRemnant : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_nProjectileID; // 0x_            
            Vector m_vStartLocation; // 0x_            
            Vector m_vProjectileLocation; // 0x_            
            QAngle m_ProjectileAngles; // 0x_            
            // m_hRemnantToKill has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRemnantToKill;
            char m_hRemnantToKill[0x_]; // 0x_            
            bool m_bProjectileStarted; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> hAlreadyHitList;
            char hAlreadyHitList[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_EmberSpirit_Activate_FireRemnant because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_EmberSpirit_Activate_FireRemnant) == 0x_);
    };
};
