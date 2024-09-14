#pragma once
#include "source2sdk/particles/C_INIT_RemapParticleCountToScalar.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x218
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_RemapParticleCountToNamedModelElementScalar : public particles::C_INIT_RemapParticleCountToScalar
    {
    public:
        // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hModel;
        char m_hModel[0x8]; // 0x1f8        
        // metadata: MPropertyFriendlyName "output min name"
        CUtlString m_outputMinName; // 0x200        
        // metadata: MPropertyFriendlyName "output max name"
        CUtlString m_outputMaxName; // 0x208        
        bool m_bModelFromRenderer; // 0x210        
        [[maybe_unused]] std::uint8_t pad_0x211[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_RemapParticleCountToNamedModelElementScalar because it is not a standard-layout class
    static_assert(sizeof(C_INIT_RemapParticleCountToNamedModelElementScalar) == 0x218);
};
