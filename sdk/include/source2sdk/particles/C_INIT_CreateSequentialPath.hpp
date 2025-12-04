#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/CPathParameters.hpp"

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
        // static metadata: MParticleMaxVersion "7"
        // static metadata: MParticleReplacementOp "C_INIT_CreateSequentialPathV2"
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_CreateSequentialPath : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "maximum distance"
            float m_fMaxDistance; // 0x_            
            // metadata: MPropertyFriendlyName "particles to map from start to end"
            float m_flNumToAssign; // 0x_            
            // metadata: MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
            bool m_bLoop; // 0x_            
            // metadata: MPropertyFriendlyName "use sequential CP pairs between start and end point"
            bool m_bCPPairs; // 0x_            
            // metadata: MPropertyFriendlyName "save offset"
            bool m_bSaveOffset; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::particles::CPathParameters m_PathParams; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateSequentialPath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateSequentialPath) == 0x_);
    };
};
