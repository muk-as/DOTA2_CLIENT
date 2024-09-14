#pragma once
#include "source2sdk/scenesystem/CSSDSMsg_LayerBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: scenesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::scenesystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x38
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSSDSMsg_PreLayer : public scenesystem::CSSDSMsg_LayerBase
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CSSDSMsg_PreLayer) == 0x38);
};
