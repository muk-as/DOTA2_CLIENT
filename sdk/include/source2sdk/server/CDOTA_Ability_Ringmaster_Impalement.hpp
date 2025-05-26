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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x600
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Ringmaster_Impalement : public source2sdk::server::CDOTABaseAbility
        {
        public:
            Vector m_vStartPos; // 0x5c0            
            std::int32_t dagger_width; // 0x5cc            
            // m_ImpactedProjectiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_ImpactedProjectiles;
            char m_ImpactedProjectiles[0x18]; // 0x5d0            
            // m_vecBoxedUnitHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlPair<std::int32_t,CHandle<source2sdk::server::CBaseEntity>>> m_vecBoxedUnitHits;
            char m_vecBoxedUnitHits[0x18]; // 0x5e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Ringmaster_Impalement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Ringmaster_Impalement) == 0x600);
    };
};
