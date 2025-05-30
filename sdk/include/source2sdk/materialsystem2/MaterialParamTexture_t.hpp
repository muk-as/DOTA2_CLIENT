#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/materialsystem2/MaterialParam_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace materialsystem2
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x10
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct MaterialParamTexture_t : public source2sdk::materialsystem2::MaterialParam_t
        {
        public:
            // m_pValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_pValue;
            char m_pValue[0x8]; // 0x8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in MaterialParamTexture_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::materialsystem2::MaterialParamTexture_t) == 0x10);
    };
};
