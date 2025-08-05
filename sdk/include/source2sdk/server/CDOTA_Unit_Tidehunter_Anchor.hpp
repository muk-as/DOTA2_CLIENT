#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
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
        // Size: 0x18c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
        // static metadata: MNetworkVarNames "Vector m_vProjectilePosition"
        #pragma pack(push, 1)
        class CDOTA_Unit_Tidehunter_Anchor : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            // metadata: MNetworkEnable
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x18b8            
            // metadata: MNetworkEnable
            Vector m_vProjectilePosition; // 0x18bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Tidehunter_Anchor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Tidehunter_Anchor) == 0x18c8);
    };
};
