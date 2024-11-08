#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x670
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "float m_flParticleSpacing"
    // static metadata: MNetworkVarNames "float m_flSlack"
    // static metadata: MNetworkVarNames "float m_flRadius"
    // static metadata: MNetworkVarNames "Color m_ColorTint"
    // static metadata: MNetworkVarNames "int m_nEffectState"
    // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
    // static metadata: MNetworkVarNames "Vector m_PathNodes_Position"
    // static metadata: MNetworkVarNames "Vector m_PathNodes_TangentIn"
    // static metadata: MNetworkVarNames "Vector m_PathNodes_TangentOut"
    // static metadata: MNetworkVarNames "Vector m_PathNodes_Color"
    // static metadata: MNetworkVarNames "bool m_PathNodes_PinEnabled"
    // static metadata: MNetworkVarNames "float m_PathNodes_RadiusScale"
    #pragma pack(push, 1)
    class C_PathParticleRope : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x560[0x8]; // 0x560
        bool m_bStartActive; // 0x568        
        [[maybe_unused]] std::uint8_t pad_0x569[0x3]; // 0x569
        float m_flMaxSimulationTime; // 0x56c        
        CUtlSymbolLarge m_iszEffectName; // 0x570        
        // m_PathNodes_Name has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlSymbolLarge> m_PathNodes_Name;
        char m_PathNodes_Name[0x18]; // 0x578        
        // metadata: MNetworkEnable
        float m_flParticleSpacing; // 0x590        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "parametersChanged"
        float m_flSlack; // 0x594        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "parametersChanged"
        float m_flRadius; // 0x598        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "parametersChanged"
        Color m_ColorTint; // 0x59c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "effectStateChanged"
        int32_t m_nEffectState; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5a4[0x4]; // 0x5a4
        // metadata: MNetworkEnable
        // m_iEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex;
        char m_iEffectIndex[0x8]; // 0x5a8        
        // metadata: MNetworkEnable
        // m_PathNodes_Position has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<Vector> m_PathNodes_Position;
        char m_PathNodes_Position[0x18]; // 0x5b0        
        // metadata: MNetworkEnable
        // m_PathNodes_TangentIn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<Vector> m_PathNodes_TangentIn;
        char m_PathNodes_TangentIn[0x18]; // 0x5c8        
        // metadata: MNetworkEnable
        // m_PathNodes_TangentOut has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<Vector> m_PathNodes_TangentOut;
        char m_PathNodes_TangentOut[0x18]; // 0x5e0        
        // metadata: MNetworkEnable
        // m_PathNodes_Color has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<Vector> m_PathNodes_Color;
        char m_PathNodes_Color[0x18]; // 0x5f8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "pinStateChanged"
        // m_PathNodes_PinEnabled has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<bool> m_PathNodes_PinEnabled;
        char m_PathNodes_PinEnabled[0x18]; // 0x610        
        // metadata: MNetworkEnable
        // m_PathNodes_RadiusScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<float> m_PathNodes_RadiusScale;
        char m_PathNodes_RadiusScale[0x18]; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x640[0x30];
        
        // Datamap fields:
        // CUtlSymbolLarge pathNodes; // 0x7fffffff
        // void InputStart; // 0x0
        // void InputStop; // 0x0
        // void InputStopEndCap; // 0x0
        // void InputDestroy; // 0x0
        // CUtlSymbolLarge InputDisablePin; // 0x0
        // float InputSetRadius; // 0x0
        // float InputSetSlack; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PathParticleRope because it is not a standard-layout class
    static_assert(sizeof(C_PathParticleRope) == 0x670);
};
