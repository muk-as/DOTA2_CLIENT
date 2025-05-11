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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x28
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CrownfallSurvivorsLightingEnvironment_t
        {
        public:
            Vector vecLightDirection; // 0x0            
            float flGlobalLightScale; // 0xc            
            float flPointLightScale; // 0x10            
            Color cLightColor; // 0x14            
            Color cAmbientColor; // 0x18            
            Color cShadowColor; // 0x1c            
            Color cShadowSecondaryColor; // 0x20            
            Color cSpecularColor; // 0x24            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t, vecLightDirection) == 0x0);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t, flGlobalLightScale) == 0xc);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t, flPointLightScale) == 0x10);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t, cLightColor) == 0x14);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t, cAmbientColor) == 0x18);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t, cShadowColor) == 0x1c);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t, cShadowSecondaryColor) == 0x20);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t, cSpecularColor) == 0x24);
        
        static_assert(sizeof(source2sdk::client::CrownfallSurvivorsLightingEnvironment_t) == 0x28);
    };
};
