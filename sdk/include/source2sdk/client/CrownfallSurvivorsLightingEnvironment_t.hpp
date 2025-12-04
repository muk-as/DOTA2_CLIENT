#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CrownfallSurvivorsLightingEnvironment_t
        {
        public:
            Vector vecLightDirection; // 0x_            
            float flGlobalLightScale; // 0x_            
            float flPointLightScale; // 0x_            
            Color cLightColor; // 0x_            
            Color cAmbientColor; // 0x_            
            Color cShadowColor; // 0x_            
            Color cShadowSecondaryColor; // 0x_            
            Color cSpecularColor; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t, vecLightDirection) == 0x_);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t, flGlobalLightScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t, flPointLightScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t, cLightColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t, cAmbientColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t, cShadowColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t, cShadowSecondaryColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t, cSpecularColor) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t) == 0x_);
    };
};
