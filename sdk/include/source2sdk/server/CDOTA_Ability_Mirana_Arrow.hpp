#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        struct CDOTABaseAbility;
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
        class CDOTA_Ability_Mirana_Arrow : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // m_hSourceAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTABaseAbility> m_hSourceAbility;
            char m_hSourceAbility[0x_]; // 0x_            
            float scepter_radius; // 0x_            
            Vector m_vStartPos; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hAlreadyHitList[2];
            char hAlreadyHitList[0x_]; // 0x_            
            // hStarfallList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hStarfallList[2];
            char hStarfallList[0x_]; // 0x_            
            std::int32_t m_nActiveArrow; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Mirana_Arrow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Mirana_Arrow) == 0x_);
    };
};
