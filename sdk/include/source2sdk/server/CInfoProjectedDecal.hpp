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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoProjectedDecal : public source2sdk::server::CPointEntity
        {
        public:
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x_]; // 0x_            
            CUtlStringToken m_sSequenceName; // 0x_            
            float m_flDistance; // 0x_            
            bool m_bNotInMultiplayer; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CInfoProjectedDecalTriggerDecal; // 0x_
            // void CInfoProjectedDecalStaticDecal; // 0x_
            // void InputActivate; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoProjectedDecal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoProjectedDecal) == 0x_);
    };
};
