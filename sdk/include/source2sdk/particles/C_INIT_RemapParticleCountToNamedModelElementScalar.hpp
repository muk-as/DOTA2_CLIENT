#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/C_INIT_RemapParticleCountToScalar.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
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
        class C_INIT_RemapParticleCountToNamedModelElementScalar : public source2sdk::particles::C_INIT_RemapParticleCountToScalar
        {
        public:
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hModel;
            char m_hModel[0x_]; // 0x_            
            // metadata: MPropertyFriendlyName "output min name"
            CUtlString m_outputMinName; // 0x_            
            // metadata: MPropertyFriendlyName "output max name"
            CUtlString m_outputMaxName; // 0x_            
            bool m_bModelFromRenderer; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RemapParticleCountToNamedModelElementScalar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RemapParticleCountToNamedModelElementScalar) == 0x_);
    };
};
