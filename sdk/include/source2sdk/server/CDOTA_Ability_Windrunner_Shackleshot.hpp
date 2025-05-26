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
        struct CDOTA_BaseNPC;
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
        // Size: 0x610
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Windrunner_Shackleshot : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t shackle_count; // 0x5c0            
            Vector m_vArrowAvgPos; // 0x5c4            
            Vector m_vArrowStartPos; // 0x5d0            
            Vector m_vArrowStartPos2; // 0x5dc            
            Vector m_vArrowStartPos3; // 0x5e8            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x5f4            
            // m_vecShackledUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_vecShackledUnits;
            char m_vecShackledUnits[0x18]; // 0x5f8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Windrunner_Shackleshot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Windrunner_Shackleshot) == 0x610);
    };
};
