#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x240
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "HModelStrong m_hModel"
    // static metadata: MNetworkVarNames "bool m_bClientClothCreationSuppressed"
    // static metadata: MNetworkVarNames "MeshGroupMask_t m_MeshGroupMask"
    // static metadata: MNetworkVarNames "int32 m_nBodyGroupChoices"
    // static metadata: MNetworkVarNames "int8 m_nIdealMotionType"
    #pragma pack(push, 1)
    class CModelState
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0xa0]; // 0x0
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "skeletonModelChanged"
        // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hModel;
        char m_hModel[0x8]; // 0xa0        
        CUtlSymbolLarge m_ModelName; // 0xa8        
        [[maybe_unused]] std::uint8_t pad_0xb0[0x38]; // 0xb0
        // metadata: MNetworkEnable
        bool m_bClientClothCreationSuppressed; // 0xe8        
        [[maybe_unused]] std::uint8_t pad_0xe9[0xaf]; // 0xe9
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
        uint64_t m_MeshGroupMask; // 0x198        
        [[maybe_unused]] std::uint8_t pad_0x1a0[0x48]; // 0x1a0
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "bodyGroupChoiceChanged"
        // m_nBodyGroupChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<int32_t> m_nBodyGroupChoices;
        char m_nBodyGroupChoices[0x18]; // 0x1e8        
        [[maybe_unused]] std::uint8_t pad_0x200[0x32]; // 0x200
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "skeletonMotionTypeChanged"
        int8_t m_nIdealMotionType; // 0x232        
        int8_t m_nForceLOD; // 0x233        
        int8_t m_nClothUpdateFlags; // 0x234        
        [[maybe_unused]] std::uint8_t pad_0x235[0xb];
        
        // Datamap fields:
        // void m_pVPhysicsAggregate; // 0xe0
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CModelState, m_hModel) == 0xa0);
    static_assert(offsetof(CModelState, m_ModelName) == 0xa8);
    static_assert(offsetof(CModelState, m_bClientClothCreationSuppressed) == 0xe8);
    static_assert(offsetof(CModelState, m_MeshGroupMask) == 0x198);
    static_assert(offsetof(CModelState, m_nBodyGroupChoices) == 0x1e8);
    static_assert(offsetof(CModelState, m_nIdealMotionType) == 0x232);
    static_assert(offsetof(CModelState, m_nForceLOD) == 0x233);
    static_assert(offsetof(CModelState, m_nClothUpdateFlags) == 0x234);
    
    static_assert(sizeof(CModelState) == 0x240);
};
