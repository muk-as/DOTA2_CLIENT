#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x4f8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoProjectedDecal : public source2sdk::server::CPointEntity
        {
        public:
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x8]; // 0x4e0            
            CUtlStringToken m_sSequenceName; // 0x4e8            
            float m_flDistance; // 0x4ec            
            bool m_bNotInMultiplayer; // 0x4f0            
            uint8_t _pad04f1[0x7];
            
            // Datamap fields:
            // void CInfoProjectedDecalTriggerDecal; // 0x0
            // void CInfoProjectedDecalStaticDecal; // 0x0
            // void InputActivate; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoProjectedDecal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoProjectedDecal) == 0x4f8);
    };
};
