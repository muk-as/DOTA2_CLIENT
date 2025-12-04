#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ArtyGameObjectDef_t.hpp"

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
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ArtyCannonDef_t : public source2sdk::client::ArtyGameObjectDef_t
        {
        public:
            bool m_bDirectAimAtTarget; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecWeapons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecWeapons;
            char m_vecWeapons[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector2D m_vShotOffset; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in ArtyCannonDef_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::ArtyCannonDef_t) == 0x_);
    };
};
