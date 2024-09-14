#pragma once
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
    // Standard-layout class: true
    // Size: 0x10
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ModelReference_t
    {
    public:
        // metadata: MPropertyFriendlyName "model"
        // m_model has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_model;
        char m_model[0x8]; // 0x0        
        // metadata: MPropertyFriendlyName "Relative probability"
        float m_flRelativeProbabilityOfSpawn; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ModelReference_t, m_model) == 0x0);
    static_assert(offsetof(ModelReference_t, m_flRelativeProbabilityOfSpawn) == 0x8);
    
    static_assert(sizeof(ModelReference_t) == 0x10);
};
