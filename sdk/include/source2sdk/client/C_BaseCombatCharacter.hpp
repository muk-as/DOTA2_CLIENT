#pragma once
#include "source2sdk/client/C_BaseCombatCharacter__WaterWakeMode_t.hpp"
#include "source2sdk/client/C_BaseFlex.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_EconWearable;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa58
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkExcludeByUserGroup "LocalPlayerExclusive"
    // static metadata: MNetworkVarNames "CHandle<C_EconWearable > m_hMyWearables"
    #pragma pack(push, 1)
    class C_BaseCombatCharacter : public client::C_BaseFlex
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWearablesChanged"
        // m_hMyWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_EconWearable>> m_hMyWearables;
        char m_hMyWearables[0x18]; // 0x9d0        
        modellib::AttachmentHandle_t m_leftFootAttachment; // 0x9e8        
        modellib::AttachmentHandle_t m_rightFootAttachment; // 0x9e9        
        [[maybe_unused]] std::uint8_t pad_0x9ea[0x2]; // 0x9ea
        client::C_BaseCombatCharacter__WaterWakeMode_t m_nWaterWakeMode; // 0x9ec        
        float m_flWaterWorldZ; // 0x9f0        
        float m_flWaterNextTraceTime; // 0x9f4        
        [[maybe_unused]] std::uint8_t pad_0x9f8[0x60];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseCombatCharacter because it is not a standard-layout class
    static_assert(sizeof(C_BaseCombatCharacter) == 0xa58);
};
